const  express = require('express');
const app = express();

//Settings
app.set('port', process.env.PORT || 3000);

//Middlewares
app.use(express.json());

//Routes
app.use(require('./usuarios')) 

//Starting the Server
app.listen(3000, () => {
    console.log('Server on port 3000');
});
