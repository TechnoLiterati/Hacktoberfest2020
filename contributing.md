<h1 align="center">This Repository will help people make their first Pull Request</h1>

<div align="center">
<h2> Hello Developer  <img src="https://media.giphy.com/media/hvRJCLFzcasrR4ia7z/giphy.gif" width="25px"></h2>
  <i>Let's help you submit your first pull request. Just follow the steps given below</i>
</div>

### Step 1
The first step you want to do in-order to contribute to an open source project is to **_fork_** the project. This will create a copy of the project under your account.<br>
You'll see the fork option on the top right hand side of the screen.
- Click on the fork button.
<details open>
  <summary>Fork Button Image</summary>
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/fork.PNG" alt="fork button Image">
</details>

### Step 2
Now, you have to clone the forked repository. This will create a local copy of the project on your machine.

You can do this in 2 ways:

<details>
  <summary>Code Button and Clone Options Image</summary>
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/clone.PNG" alt="Code Button Image">
</details>

1. OPTION 1
  - Click on the clone button.
  - Download the ZIP and then extract it.
2. OPTION 2
  - Click on the clone button.
  - Copy the link under HTTPS section.
  - Open terminal/git bash/command prompt.
  - Type -
  ```
  git clone
  ```
  - Now paste the link.
  - The resulting command should look something like this:
  ```
  git clone https://github.com/YOUR_USERNAME/Hacktoberfest2020.git
  ```
<details>
  <summary>Cloning though git bash</summary>
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/cli%20clone.PNG" alt="fork button link">
</details>
  
### Step 3
Let's start working on the project now! 
We need to change directory into cloned folder by typing the following command.
```
cd first-pr-repo
```
Now, BEFORE CHANGING ANYTHING, make sure you're working on a different branch and not in master. 
To create a new branch, from the terminal inside your current project directory type the following command.
```
git branch YOUR_BRANCH_NAME
```
<br>
(You can give any name to your branch which describes the purpose of the branch. Since here we're adding your profile to the profiles directory, we'll simply give the name of the branch as above.
eg: git branch issue1. )<br>
Once you have created the new branch we'll change the current branch from master to your newly created branch.<br>
Execute the following command on your terminal.
```
git checkout YOUR_BRANCH_NAME
```
<details>
  <summary>It should look like this. (With your chosen names ofcourse)</summary>
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/branching.PNG" alt="Branching procedure">
</details>
  

### Step 4
- Navigate into the project directory (through your file manager) and open the required file in your favourite editor.

- Make changes

- Save the file.<br>

**NOTE**: This is just a way of simulating - you making changes into the project file. 

### Step 5
- Now we need to stage all the changes we made. 
- Open the terminal again and inside the project directory and execute following commands.
```
git add .
```
- The above command staged all the changes, now we need to commit them with a suitable message. You can commit using the following command.
```
git commit -m "YOUR_COMMIT_MESSAGE"
```
Example:
```
git commit -m "Added binary search"
```
<details>
  <summary>Commiting Image</summary>
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/commit.PNG" alt="Commiting Image">
</details>


### Step 6
Let's push the changes to your repository on GitHub! 
Execute the following command to push all the changes to the forked copy in your GitHub account.
```
git push -u origin YOUR_BRANCH_NAME
```
### Step 7
Now open your github account to make a pull request.
- Click on compare and pull request.

<div align="center">
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/pull%20request.PNG" alt="pr button">
</div>
<br>

- Write a meaningful description and click on Create Pull Request.

<div align="center">
  <img src="https://github.com/TechnoLiterati/Hacktoberfest2020/blob/master/images/finalimage.PNG">
</div>

<h2 align="center">Congratulations! You just created your first pull request🥳</h2>
  
