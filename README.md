Ki# Cloud

export DISPLAY=localhost:0.0

sudo apt-get remove git

sudo apt install git
git --version<br>
git config --global user.name "5007 Abirami"<br>
git config --global user.email "abby71177@gmail.com"<br>

------ ----------------------TO PUSH MULTIPLE FILES IN A REPO ------------------------------<br>
go to a dummy folder

git clone https://github.com/abby711/FOSS.git <br>
cd FOSS

code .
 [ goes to the designated ide and start adding files/working on the folder ]

git add .

git commit -m message you want without spaces

git push origin main

----------------------------------- to delete a file ---------------------------------------<br>
git rm filename <br>
git commit -m message <br>
git push origin main <br>

----------------------------------- to merge branches--------------------------------------------------------------<br>
git branch branchname  ----> create new branch<br>
git checkout branchname   ----> move into the new branch<br>
git status<br>
git branch --list<br>

[add a file to the branch]

git add .

git commit -m "message"

git push origin "branchname" <br>
git checkout main<br>
git merge "which branch you want to merge"<br>
git commit -m "message"<br>

git push origin main<br>

------------------------------------to delete a branch----------------------------------------------------------------<br>
git branch -d branchname

------------------------------------- other commands-------------------------------------<br>
git log
git reset<br>
git init <br>
git status <br>
git fetch




--------------------VM PLAYER----------------------------------------------<br>
https://www.vmware.com/in/products/workstation-player/workstation-player-evaluation.html
https://www.virtualbox.org/wiki/Downloads

https://releases.ubuntu.com/20.04/

--------------------GAE THEORY AND ALGO--------------------------------<br>
https://codelabs.developers.google.com/codelabs/cloud-app-engine-python3#0
--------------FLASK--------------------------------------------------<br>
https://codeforgeek.com/render-html-file-in-flask/
https://stackabuse.com/integrating-mongodb-with-flask-using-flask-pymongo/

---------------------- CLOUD SIM-------------------------------------<br>
https://github.com/michaelfahmy/cloudsim-task-scheduling


---------------------FILE TRANSFER GUEST TO HOST----------------------<br>
https://www.tecmint.com/enable-share-folder-in-vmware-workstation/



