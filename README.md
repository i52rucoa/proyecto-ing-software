# Prácticas de ingeniería del software
Repositorio creado para la realización de las prácticas de ingenieria del software en la Universidad de Córdoba.


# Comando utiles para la práctica

Comandos de configuración de cuenta

    git config --global user.name <Nombre de cuenta github>

    git config --global user.email <email>  

    git config --global colot.ui true


Para ver un resumen de esta configuración (git config --list)

Manipulación de archivos

Con este comando se nos permite introducir un documento dentro del repositorio en la rama actual.

    git add <fichero>  

Con este mensaje se "suben" los cambios realizados por el usuario.
git commit -m "<Mensaje a introducir>"
  
Para saber en que rama estamos dentro del repositorio.
  ```
  git status
  ```
Para la creación de ramas usaremos
     
    git branch <Nombre de la rama>
    
Para ver el registro/historial de la rama se muestra con el siguiente comando

    
    git log
     
Para unir dos ramos usaremos el merge
    
    git merge <rama ha unir al master>
      
Si utilizamos repositorios compartidos debemos usar los siguientes.


Usaremos push para "subir" archivos al repositorio colaborativo

     
    git push <URL de github>
Para actualizar los cambios pendientes en el repositorio se hace mediante

     
    git fetch origin
      
Para descargar dichos cambios

     
     git pull
       

 



