const express = require('express');
const router = express.Router();

const mysqlConnection = require('./database'); 

router.get('/', (req, res)=>{
    mysqlConnection.query('SELECT * FROM usuarios',(err, rows, fields)=>{
        if(!err){
            res.json(rows);
        }else{
            console.log(err);
        }
    });
});

router.get('/:id', (req, res) => {
    const { id } = req.params;
    console.log(id);
    mysqlConnection.query('SELECT * FROM usuarios WHERE id = ?', [id],  (err, rows, fields) =>
    {
        if(!err){
            res.json(rows[0]);//SOLO OBTIENE EL OBJETO 0,PUEDE QUE NECESITE ADDAPTARSE
        }else{
            console.log(err);
        }
    });
});

// DELETE An usser
router.delete('/:id', (req, res) => {
    const { id } = req.params;
    mysqlConnection.query('DELETE FROM usuarios WHERE id = ?', [id], (err, rows, fields) => {
      if(!err) {
        res.json({status: 'usser Deleted'});
      } else {
        console.log(err);
      }
    });
  });

// INSERT An usser

router.post('/', (req, res) => {
    const {id, name, repositorio, file, ultimo_cambio} = req.body;
    console.log(id, name, repositorio, file, ultimo_cambio);
    const query = `
      CALL usuariosAddOrEdit(?, ?, ?, ?, ?);
    `;
    mysqlConnection.query(query, [id, name, repositorio, file, ultimo_cambio], (err, rows, fields) => {
      if(!err) {
        res.json({status: 'Usser Saved'});
      } else {
        console.log(err);
      }
    });
  
  });
  
 router.put('/:id', (req, res) => {
    const {name, repositorio, file, ultimo_cambio } = req.body;
    const { id } = req.params;
    const query = `
      SET @id = ?;
      SET @name = ?;
      SET @repositorio = ?;
      SET @file = ?;
      SET @ultimo_cambio = ?;
      CALL usuariosAddOrEdit(@id, @name, @repositorio, @file, @ultimo_cambio);
    `;
    mysqlConnection.query(query, [id, name, repositorio, file, ultimo_cambio], (err, rows, fields) => {
      if(!err) {
        res.json({status: 'Usser Updated'});
      } else {
        console.log(err);
      }
    });
  });



module.exports = router;