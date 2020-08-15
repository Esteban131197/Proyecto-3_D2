CREATE DEFINER=`root`@`localhost` PROCEDURE `usuariosAddOrEdit`(
	in _id INT ,
    in _name VARCHAR(45) ,
    in _repositorio VARCHAR(45),
    in _commitdescripcion VARCHAR(45),
    in visualizaciondocumento longblob
)
BEGIN
	IF _id = 0 THEN
		INSERT INTO usuarios (name, repositorio, commitdescripcion, visualizaciondocumento )
        VALUES (_name, _repositorio, _commitdescripcion, _visualizaciondocumento);
        SET _id = LAST_INSERT_ID();
	ELSE
		UPDATE usuarios
        SET 
			name = _name, 
            repositorio = _repositorio, 
            commitdescripcion = _commitdescripcion,
            visualizaciondocumento  = _visualizaciondocumento 
			
            WHERE id = _id;
	END IF;
    
    SELECT _id AS id;
    
END