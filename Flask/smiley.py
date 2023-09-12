from flask import Flask,render_template

app=Flask(__name__)

@app.route("/")
def smiley():
    return render_template("smiley_face.html")


if __name__=="__main__":
    app.run(debug=True)