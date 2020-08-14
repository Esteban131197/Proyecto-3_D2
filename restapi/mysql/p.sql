CREATE DEFINER=`root`@`localhost` PROCEDURE `usuariosAddOrEdit`(
	in _id INT ,
    in _name VARCHAR(45) ,
    in _repositorio VARCHAR(45),
    in _branch VARCHAR(45),
    in _files INT (11),
    in _Ultimo_cambio INT (11)
)
BEGIN
	IF _id = 0 THEN
		INSERT INTO usuarios (name, repositorio, branch, file, ultimo_cambio)
        VALUES (_name, _repositorio, _branch, _file, _ultimo_cambio);
        SET _id = LAST_INSERT_ID();
	ELSE
		UPDATE usuarios
        SET 
			name = _name, 
            repositorio = _repositorio, 
            branch = _branch, 
            file = _file,
            ultimo_cambio = _ultimo_cambio
			
            WHERE id = _id;
	END IF;
    
    SELECT _id AS id;
    
END