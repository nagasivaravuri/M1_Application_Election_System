# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | ------------------------------------------ | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | cast vote                                  | 1 to 6  |Thanks to vote                 | Thanks to vote                | Requirement Based |
| H_02   | finding vote count                         | ----    | Voting stastics               |  Voting stastics              | Requirement Based |
| H_03   | When user enter option which is not listed | ----    | Give message "Invalid choice" | Give message "Invalid choice" | Scenario Based    |


## Low Level Test Plan

---

| TestID | Description                                         | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | --------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| L_01   | Finding leading candidate                           | 3             | warning no win sitution  | warning no win sitution  | Requirement Based |
| L_02   | when user wants to exit                             | 0             | Invalid choice           | Invalid choice           | Requirement Based |



