class Telephone:
    """descripyion of telephone"""
    def __init__(self,first_name,last_name,phone_number,color):
        self.first_name = first_name
        self.last_name = last_name
        self.phone_number = phone_number
        self.color = color
    def print_info(self):
        """print all info about telephone"""
        print(self.first_name,self.last_name,self.phone_number,self.color)
    
class Phonebook:
    """contact list"""
    def __init__(self):
        self.contact_list = []

    def add(self,contact):
        """add contacts in a list"""
        self.contact_list.append(contact)
        return self
    def get_all(self):
        """get a all options"""
        return contact_list
    def print_all(self):
        """print all"""
        print("my contacts")
        for contact in self.contact_list:
            contact.print_info()

phone = Telephone("gaga","Aloshi","099987890","karmir_ayfon")
phone.print_info()
book = Phonebook()
book.add(Telephone("sisak","tikoyi","077126709","kanach_ayfon"))
book.add(Telephone("hnoyi","arevik","096789034","kaput_ayfon"))
book.print_all()
    


