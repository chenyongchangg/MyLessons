#auto push script
echo  " hello you!"
git add .
read -p "please input commit..." msg
if $msg == "n"
then
git commit -m "add new solution"
git push
else
git commit -m "$msg"
git push
fi

