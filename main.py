

from flask import Flask,render_template,request, url_for, redirect
from flask_pymongo import PyMongo
app = Flask(__name__)




app.config['MONGO_URI'] = 'mongodb+srv://abby:abby@freecluster.lvlvs.mongodb.net/rsa?retryWrites=true&w=majority'
mongo = PyMongo(app)


datas = mongo.db.rsa

@app.route('/')
def home():
   return render_template('home.html')

@app.route('/add', methods=['POST'])
def addData():
    p = request.form.get('bid')
    q = request.form.get('bname')
    r = request.form.get('aname')
    s = request.form.get('sub')
    
    datas.insert_one({'BookId' : p, 'BookName' : q,'AuthorName':r,'Subject':s})
    return redirect(url_for('home'))


if __name__ == '__main__':
   app.run()
   #    app.run(host="localhost", port=8080, debug=True)

   


