Final Projects: Please submit a brief descriptive synopsis alongside your final project. Each final project must have a description synopsis. The 500-1000 word synopsis should detail your project's **structure, content, and contribution**. Do not duplicate the synopsis for group projects. Each student will write an individual synopsis.

```
_CU Sustainable: doomed… till we're not!_
```

For the final project, I created a program called "doomed" in the programming language C, that takes in as input the name of a common food item and returns three metrics to the user. The first is greenhouse gas emissions per kilogram, the second is the total impact they have had so far, and lastly is the average impact they've had which is computed over the course of their day.

The goal of this was to make Columbia students more aware of the environmental impact of their food choices, and to inspire them to make better choices. Too often, due to the easy availability of food at the dining hall, students get more food than they need and waste the rest. In certain dining halls like Ferris and JJ's, the dining hall lacks reusable cutlery, so food wastage multiplies other kinds of wastage of plastic forks, paper plates, et al.

Before I started this project, I wasn't conscious of the environmental impact of food items I ate every day. I associated greenhouse gas emissions on an individual level with activities like driving and using electricity, not with eating. However, being made aware of the environmental impact of foods I consume daily like milk, coffee, and bananas, and therefore how my own eating patterns affect demand for certain food items, I started changing my choices to be more conscious.

My process for building this project involved three stages: research, implementation, and testing. In the research stage, I searched the internet for data on the greenhouse gas emissions of commonly consumed foods. This was a challenging task as I wasn't sure how to measure environmental impact and what constituted it. I came across a metric called the ecological footprint analysis (EFA), which takes into account the amount of land needed to provide the resources to produce a product or measure a level of consumption (Wackernagel and Rees, 1996). 

From course discussions, A Perfect Moral Storm by Stephen Gardiner was the initial ethical dilemma that set the framework for using greenhouse gas emissions as a metric to measure personal environmental impact. Gardiner states that the instant radical cut strategy, which involves cutting greenhouse gas emissions, would have a net positive effect. However, the success of such a strategy is dependent on large-scale political factors out of an individual’s control. The suggestions which are returned to the user, which provide them with suggestions for reduced-emission foods, provide them with ways to make changes at a personal level, and return control of their greenhouse gas emission to them. 

While I initially began by providing the user with greenhouse gas emissions associated with a specific food, the ecological footprint analysis allowed me to assign a numerical value to food consumption based directly on the amount of land needed to provide resources to its production. For example, drawing on Michael Herzfeld’s phenomenon of crypto-colonies, it’s imperative to consider which country certain foods we consume come from, and how food production relates to an exploitation of natural resources in specific countries, making them colonies. Aggressive production of foods like avocado have promoted steady deforestation in Michoacán, Mexico, and depleted local forests important for biodiversity. While the production value of avocado trees per hectare has been extremely profitable, ~$7000 in 2018 and currently rising, it has adverse impacts like erosion, river overflow, and water stress. Avocados are extremely common among college students, and readily available.

While country of origin of a specific food is a lot of information to provide to a user trying to reduce their environmental impact, there is a simpler solution. By providing them with an alternative food easily available at Columbia’s dining halls, they can make better choices. For example, avocado spread is available at every dining hall, but after seeing its adverse impact through the app, users will possibly be motivated to turn towards healthier alternatives. This would also target a wider user population, as they would not have to process a lot of information, and greenhouse gas emissions are a widely known user metric.

A third theme explored through this project, rather tangentially, was Anand Taneja’s connection between barakat, the blessings of a saint according to a religious text, and the local ecology. In the same way that the entry of water, a resource produced by non-human sources such as a stream, was regulated by a human-built infrastructure such as a large dam, the regulation of naturally produced resources like food is done through a technological product like CU Sustainable. While in the former, the positive effect was providing dwellers with the belief that water has healing properties, and consequently a respect for the natural resource, the latter is intended to be a tool that provides others with the negative impacts of food consumption, thus inspiring them to make better choices in their day-to-day lives that become habits, and consequently beliefs. 

If CU Sustainable can inspire people at an individual level, it can spur change at a community level, where users would all be aware of food emissions and consume foods that are less exploitative. Lastly, this would lead to changes at a macro-level, where for example, avocado exports would decrease, leading to a reduction in crypto-colonies in the world. Not only did doing this final project provided me with a deeper understanding of my own food consumption patterns at Columbia dining halls, but it also helped me develop a nuanced understanding of at a lower level, how eating certain foods is different from eating others. 

Project technology 
From a technological standpoint, I chose the programming language C as it is a low-level language that provided me with control of how the input data was used. For example, I inputted a CSV file obtained from the cited resource below, that uses real data, and that separates those values by space and creates a key-value database. The key is the food item, while the value is the greenhouse gas emissions per kilogram of that food. I also declared two additional variables – one that calculates the sum of each greenhouse gas emission over the course of the day, and the second that averages it out over certain foods by adding up all the emissions and dividing it by the number of emissions. By implementing the project in C, a user in the target audience interested in contributing to this project could parse the code step-by-step and easily understand and make additions to it. 

Presentation:

I also presented the final project to the class, and did a demo. The presentation can be found here: https://pdf.ac/27GQlQ

Video Demo:

A video demo of the project can be found here: https://drive.google.com/file/d/1SgjCKN-pCshHVOvfRWzDhMTnG-wL6XPe/view?usp=sharing

References:

Ritchie, H. (2022) _Dairy vs. plant-based milk: What are the environmental impacts?_, _Our World in Data_. Available at: https://ourworldindata.org/environmental-impact-milks (Accessed: December 2, 2022).

Ritchie, H. (2019) _Food production is responsible for one-quarter of the world's greenhouse gas emissions_, _Our World in Data_. Available at: https://ourworldindata.org/food-ghg-emissions (Accessed: December 2, 2022).

Ritchie, H. and Roser, M. (2022) _Environmental impacts of food production_, _Our World in Data_. Available at: https://ourworldindata.org/environmental-impacts-of-food (Accessed: December 1, 2022).

Stretch goals: My goals with this project extend beyond the scope of this class. They are to provide alternative foods similar to the food inputted that have less greenhouse gas emissions per kilogram. Another goal would be to provide students with a historical understanding of where ubiquitous products we use come from, and who they are harming.
