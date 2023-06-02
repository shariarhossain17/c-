{
    name:""
    img:""
    category:"bata"
}
{
    name:""
    img:""
    category:"apex"
}
{
    name:""
    img:""
    category:"easy"
}



app.get("/toy/:bata",async(req,res)=> {
    const filter = req.params.category;


    const result = await collectiom.find({ category:filter})
})