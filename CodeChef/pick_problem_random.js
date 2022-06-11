// Run this on Console
for(problem=document.querySelector("tbody").children,done=document.querySelectorAll('[title="Accepted"]'),pick=problem[Math.floor(Math.random()*problem.length)],not_found=!0;not_found;){pick=problem[Math.floor(Math.random()*problem.length)];for(var i=0;i<done.length;i++){if(done[i].parentElement.parentElement.parentElement.isEqualNode(pick)){not_found=!0;break}not_found=!1}}console.log(pick.children[2].children[1].children[0].href);

// Run this on Console (Unattempted tab)
problem=document.querySelector("tbody").children;pick=problem[Math.floor(Math.random()*problem.length)];console.log(pick.children[2].children[1].children[0].href);