<p align="center">
  <img src="https://i.postimg.cc/3RJ0wDjB/Blank-diagram.png">
</p>

I've drawn a liking to abstraction and how abstraction can increase the understandability and readability of a larger project.

In particular, I like how the OSI model provides visualization of the functionality of each layer.

I will be borrowing from this idealogy, applying abstraction, and attempt to keep this project well organized.

I'm layering this project similar to how the OSI models its layers functionality. Just as how each layer of the OSI model functions without regard to the other layers' functionality. Each layer of this API will work as an individual entity, pulling or passing data onto the next layer while applying or removing the other layer's encapsulation.

Each layer of abstraction and functionality will be organized within directories. When traversing through the directory tree, as you progress deeper, each layer will remove the abstraction provided by the previous layer.

You are currently at the root level of the directory tree and the highest level of abstraction.

I've provided a flowchart to illustrate how the main function loops over each layer. At the moment the goal is to remain single-threaded, once the program is functional, I will observe performance and make the decision of whether or not to go multithreaded.

Below you will find a short description of each layer's functionality.

**Layer 7**

**Layer 6**

**Layer 5**

**Layer 4**

**Layer 3**

**Layer 2**

**Layer 1**