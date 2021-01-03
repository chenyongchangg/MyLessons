#auto push script
echo  " hello you!"
git add .
read -p "please input commit..." msg
git commit -m "$msg"
git push

