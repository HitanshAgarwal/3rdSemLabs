class PaymentMethod:
    
    def payment(self, amount):
        pass
    
    def issue_refund(self, amount):
        pass
    
    def handle_error(self, error):
        print(f"Error: {error}")
        
class CreditCard(PaymentMethod):
    def __init__(self, card_number, expiry_date, cvv):
        self.card_number = card_number
        self.expiry_date = expiry_date
        self.cvv = cvv
        
    def payment(self, amount):
        if self.card_number == 16 and self.cvv == 3:
            print(f"Paid {amount} using card number {self.card_number}.")
        else:
            self.handle_error("Invalid Card Details")
            
    def issue_refund(self, amount):
        print(f"Refund of amount {amount} issued.")
        
class PayPal(PaymentMethod):
    def __init__(self, email, password):
        self.email = email
        self.password = password
        
    def payment(self, amount):
        if "@" in self.email:
            print(f"Payment of {amount} processed.")
        else:
            self.handle_error("Invalid Details")
            
    def issue_refund(self, amount):
        print(f"Refund of amount {amount} issued.")
        
class BankTransfer(PaymentMethod):
    
    def __init__(self, bank_account_number, sort_code):
        self.bank_account_number = bank_account_number
        self.sort_code = sort_code
        
    def payment(self, amount):
        if len(self.bank_account_number) == 10:
            print(f"Payment of {amount} processed.")
        else:
            self.handle_error("Invalid Details")
    
    def issue_refund(self, amount):
        print(f"Refund of amount {amount} issued.")