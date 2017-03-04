import csv
from openpyxl import Workbook
import xlwt
import arial10

#f=open('sample.csv','w+')
#f.close()
class FitSheetWrapper(object):
    """Try to fit columns to max size of any entry.
    To use, wrap this around a worksheet returned from the 
    workbook's add_sheet method, like follows:

        sheet = FitSheetWrapper(book.add_sheet(sheet_name))

    The worksheet interface remains the same: this is a drop-in wrapper
    for auto-sizing columns.
    """
    def __init__(self, sheet):
        self.sheet = sheet
        self.widths = dict()

    def write(self, r, c, label='', *args, **kwargs):
        self.sheet.write(r, c, label, *args, **kwargs)
        #width = arial10.fitwidth(label)
        width=math.ceil(int(arial10.fitwidth(label)))
        if width > self.widths.get(c, 0):
            self.widths[c] = width
            self.sheet.col(c).width = width

    def __getattr__(self, attr):
        return getattr(self.sheet, attr)

file=['sample.csv']
for i in file:
	f=open(i,'rb')
	read=csv.reader((f),delimiter=",")
	wbk=xlwt.Workbook(encoding='latin-1')
	sheet=wbk.add_sheet("Sheet 1")

	for ro, row in enumerate(read):
		for co, value in enumerate(row):
			sheet.write(ro,co,value)
	wbk.save(i+'.xls')