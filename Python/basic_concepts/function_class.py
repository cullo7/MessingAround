class Function:

    def function(self):
        print("function")

def function_eater(f):
    f.function()

func = Function()
function_eater(func)
