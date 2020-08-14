CREATE DATABASE IF NOT EXISTS Got ;

USE Got;
 
CREATE TABLE usuarios (
	id INT (11) NOT NULL AUTO_INCREMENT,
    name VARCHAR(45) DEFAULT NULL,
    repositorio VARCHAR(45) DEFAULT NULL,
    branch VARCHAR(45) DEFAULT NULL,
    files INT (11) DEFAULT NULL,
    ultimo_cambio INT (11) DEFAULT NULL, 
    
    PRIMARY  KEY(id)
);

DESCRIBE usuarios;

INSERT INTO usuarios values
	(1, 'Esteban', 'Proy1', 'Master', 0, 9),
    (2, 'Brayan', 'Proy2', 'Master', 1, 7);
	
    
SELECT * FROM usuarios;

ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'admin';

