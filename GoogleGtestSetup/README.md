# Setup Google gtests for your project

## Before use

- add your Google gtests PATH in `addGtestS.sh` (line 3).
- uncomment line 110 if you use Windows
- uncomment line 113 if you use Mac

## 1. use case

	1. Make a CLion project.
	2. Copy the addGtestS.sh int your project dir.
	4. In the terminal navigate to the project folder.
	3. Run addGtestS.sh:
		```
		./addGtestS.sh
		```

	note: add addGtestS.sh to your .gitignore.

## 2. use case

	1. Copy addGtestS.sh somewhere in to your $PATH.
	2. Set execution to addGtestS.sh with chmod u+x addGtestS.sh.
	3. Make a CLion project.
	4. In the terminal navigate to the project folder.
	5. Run addGtestS.sh:
		```
		addGtestS.sh
		```
