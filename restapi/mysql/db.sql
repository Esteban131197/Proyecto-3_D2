CREATE DATABASE IF NOT EXISTS Got ;

USE Got;
 
CREATE TABLE usuarios (
	id INT (11) NOT NULL AUTO_INCREMENT,
    name VARCHAR(45) DEFAULT NULL,
    repositorio VARCHAR(45) DEFAULT NULL,
    commitdescripcion VARCHAR(45) DEFAULT NULL,
    visualizaciondocumento longblob,
    
    PRIMARY  KEY(id)
);

SELECT * FROM usuarios;

ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'admin';

