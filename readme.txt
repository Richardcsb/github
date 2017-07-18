Git is a distributed version control system.
Git is free software distributed under the GPL.
git init
git add <file>
git commit -m "xxx"
git status
git diff
git log
git reset -- hard HEAD^
git reset -- hard 44567
git reflog
git checkout -- file                //丢弃文件
git reset HEAD file                 //缓存区撤销回工作区
git checkout -- file                //恢复工作区误删
git rm file
git remote add origin git @github.com:michaelliao/learn.git
git push -u origin master
git push origin master
git clone git@github.com:michaelliao/gitskills.git
git branch                           //查看分支
git branch <name>                    //创建分支
git checkout <name>                  //切换分支
git checkout -b <name>               //创建+切换分支
git merge <name>                     //合并分支
git branch -d <name>                 //删除分支
git log --graph                      //查看分支合并图

