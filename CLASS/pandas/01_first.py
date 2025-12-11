import numpy as np
import pandas as pd
data=np.arange(0,20).reshape(5,4)
#print(data)
df=pd.DataFrame(data,index=["row1","row2","row3","row4","row5"],
                     columns=["Column1","Column2","Column3","Column4",])
#print(df)
#print(df.head())
#print(type(df))
#print(df.describe())

#INDEXING
#COLUMNNAME, ROWINDEX[LOC],ROWINDEX COLUMNINDEX NUMBER[.ILOC]
print(df[['column1','column2','column3'],datatype=[1,4]])