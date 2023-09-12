from flask import Flask,render_template,request,redirect,url_for,jsonify
app=Flask(__name__)


@app.route('/')
def welcome():
    return "Welcome to the Home Page"

@app.route("/index",methods=["GET"])
def index():
    return "Welcome to the Index Page"


@app.route("/success/<int:score>")
def success(score):
    return f"The person has passed and the score is : {score}"

@app.route("/fail/<int:score>")
def fail(score):
    return f"The person has failed and the score is: {score}"

@app.route("/api",methods=["POST"])
def cal_sum():
    data=request.get_json()
    a_val=float(dict(data['a']))
    b_val=float(dict(data['b']))
    return jsonify(a_val+b_val)
    #return f"The sum of the two terms is : {a+b}" 

@app.route("/form",methods=["GET","POST"])
def form():
    if request.method=="GET":
        return render_template("form.html")
    else:
        maths=float(request.form["maths"])
        science=float(request.form["science"])
        history=float(request.form["history"])
        avg=(maths+history+science)/3
        res=""
        if avg>33:
            res="success"
        else:
            res="fail"
        return redirect(url_for(res,score=avg))
        # return render_template("form.html",score=avg)
        
    

if __name__=="__main__":
    app.run(debug=True)
    