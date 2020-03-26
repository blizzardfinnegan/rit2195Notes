Initial Conditions:
| QD   | QC   | QB   | QA   |
| ---- | ---- | ---- | ---- |
| 1    | 0    | 1    | 1    |

Input 1:

| Clear | Load | D    | C    | B    | A    | EnableP | EnableT | Clock  |
| ----- | ---- | ---- | ---- | ---- | ---- | ------- | ------- | ------ |
| 0     | 1    | 1    | 0    | 1    | 1    | 0       | 0       | rising |

Output:

| QD   | QC   | QB   | QA   |
| ---- | ---- | ---- | ---- |
| 0    | 0    | 0    | 0    |

New

Input 2:

| Clear | Load | D    | C    | B    | A    | EnableP | EnableT | Clock  |
| ----- | ---- | ---- | ---- | ---- | ---- | ------- | ------- | ------ |
| 1     | 0    | 1    | 0    | 1    | 1    | 1       | 1       | rising |

Output:

| QD   | QC   | QB   | QA   |
| ---- | ---- | ---- | ---- |
| 1    | 0    | 1    | 1    |

New

Input 3:

| Clear | Load | D    | C    | B    | A    | EnableP | EnableT | Clock  |
| ----- | ---- | ---- | ---- | ---- | ---- | ------- | ------- | ------ |
| 1     | 1    | 1    | 0    | 1    | 1    | 1       | 1       | rising |

Output:

| QD   | QC   | QB   | QA   |
| ---- | ---- | ---- | ---- |
| 1    | 1    | 0    | 0    |