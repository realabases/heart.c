**How it works:**

* 1:
  The size you give for the program represents the number of certain pixels and spaces, Here's an example of a heart of size **3**:
  
![image](https://github.com/realabases/heart.c/assets/138024063/5eb46e6e-dd94-4274-8332-75c91a4c1fa6)

  The top pixels of the heart is equals to **(size - 2)** if the number is negative then it simply wont darw any.
  ![image](https://github.com/realabases/heart.c/assets/138024063/abe1ff95-3892-457d-b2d6-a8275f5ac528)

* 2:
  To determine how much pixels the program needs to draw between the left and the right side of the heart it uses the formula **(2X + 3 + (X-1))** where **X** is the size, Here's an example with two hearts of sizes **1** and **2**:
  ![image](https://github.com/realabases/heart.c/assets/138024063/f2f06cf8-c3a1-49c0-b4dc-f30232050f86)


* 3:
  To draw the rest of the heart we need to determine the height of the rest of it, It depends on whether the size is an odd or an even number, If its **odd** then the formula of the height is **((3X + 1) / 2)** where **X** is the size.
  
  However if it's **even** then the forumla is **(1.5X)** where **X** is the size.
![image](https://github.com/realabases/heart.c/assets/138024063/3dc266f9-2f35-4157-b777-efcb850b45e0)

* 4:
  We need the number of spaces at the start of each row, The formula to achive this is **(X-(X-1-I))** where **X** is the size and **I** is the number of the current row ***(first row is zero)***, Here's an example with two hearts of sizes **1** and **2**:

  ![image](https://github.com/realabases/heart.c/assets/138024063/8ece1c2c-030d-4728-8d3d-ce28fa427acd)

* 5:
  Finally we need to determine the number of pixels to draw on each row, The formula to achive that is as **(2\*X + 3 + (X-1) - 2 - 2\*I)** where **X** is the size and **I** is the current row ***(first row is zero)***, Here's an example with two hearts of sizes **1** and **2**:

  ![image](https://github.com/realabases/heart.c/assets/138024063/34c81368-779f-4d1e-9dea-e66fb0c23737)


<sub>All the formulas were found with trial and error</sub>	
