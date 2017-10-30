formatter = "%r %r %r %r"
#print numbers
print formatter % (1,2,3,4)
#print words
print formatter % ("one","two","three","four")
#print bool
print formatter % (True, False, False, True)
#reprint formatter 
print formatter % (formatter, formatter, formatter, formatter)
#print strings 
print formatter % (
	"I had this thing.",
	"That you could type up right.",
	"But it didn't sing.",
	"So I said goodnight."
	)