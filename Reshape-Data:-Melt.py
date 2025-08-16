import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
    return report.melt(id_vars=["product"],value_vars=report.columns[1:],               var_name="quarter",value_name="sales")