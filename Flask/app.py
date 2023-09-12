from flask import Flask,render_template

from flask_sqlalchemy import SQLAlchemy
from datetime import datetime

app=Flask(__name__)

app.config["SQLALCHEMY_DATABASE_URI"]= "sqlite:////tmp/todo.db"

app.config["SQLALCHEMY_DATABASE_URI"]=False
db= SQLAlchemy(app)



class Todo((SQLAlchemy(app)).Model):
    sn=(SQLAlchemy(app)).Column((SQLAlchemy(app)).Integer,primary_key=True)
    title=(SQLAlchemy(app)).Column((SQLAlchemy(app)).String(200),nullable=False)
    desc=(SQLAlchemy(app)).Column((SQLAlchemy(app)).String(200),nullable=False)
    date_created=(SQLAlchemy(app)).Column((SQLAlchemy(app)).DateTime,default=datetime.utcnow)
    

    def __repr__(self)->str:

        return f"{self.sno} - {self.title}"
     
 
 
 

@app.route('/')

def hello_world():

    return render_template('index.html')

@app.route("/hello")

def hoempage():

    return "Hello World"
    


if __name__=="__main__":

    app.run(debug=True)