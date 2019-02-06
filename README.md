# shifts_creator
[![Build Status](https://travis-ci.com/anmaber/shifts_creator.svg?branch=master)]
**Educational project.**
Main goal is to implement an application that can create working schedule in restaurant based on employee's availability. In basic version databases will be .csv files and an application will be console application. First extention is to create user interface using Qt. After that, aim is to stop using .csv files, create databases and use QtSql.
### Assumptions: 
**Available positions:**
- cashier
- service
- cook
- shift manager
- sink

**Possible shifts:**
1. 7:00 - 15:00
2. 11:00 - 19:00
3. 13:00 - 21:00
4. 15:00 - 23:00

**Shifts possible on positions:**
- cashier - 1,2,3,4
- service - 1,2,4
- cook - 1,2,4
- shift manager - 1,4
- sink 19:00-23:00

**Number of administrators:** 1

**Availability options:**
- full
- off
- between (hour - hour)
- before (hour)
- after (hour)
