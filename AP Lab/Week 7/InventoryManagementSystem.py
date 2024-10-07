class Product:
    def __init__(self, name, price, quantity, sku):
        self.name = name
        self.price = price
        self.quantity = quantity
        self.sku = sku

    def update_stock(self, amount):
        self.quantity += amount

    def calculate_inventory_value(self):
        return self.price * self.quantity

    def is_low_stock(self, threshold=5):
        return self.quantity < threshold

    def apply_discount(self, discount_percentage):
        discount_amount = (discount_percentage / 100) * self.price
        self.price -= discount_amount


class Electronics(Product):
    def __init__(self, name, price, quantity, sku, warranty_period, brand):
        super().__init__(name, price, quantity, sku)
        self.warranty_period = warranty_period
        self.brand = brand

    def display_info(self):
        return (f"Electronics(Name: {self.name}, Price: {self.price}, "
                f"Quantity: {self.quantity}, SKU: {self.sku}, "
                f"Warranty: {self.warranty_period} years, Brand: {self.brand})")


class Clothing(Product):
    def __init__(self, name, price, quantity, sku, size, material):
        super().__init__(name, price, quantity, sku)
        self.size = size
        self.material = material

    def display_info(self):
        return (f"Clothing(Name: {self.name}, Price: {self.price}, "
                f"Quantity: {self.quantity}, SKU: {self.sku}, "
                f"Size: {self.size}, Material: {self.material})")


class Groceries(Product):
    def __init__(self, name, price, quantity, sku, expiration_date, is_organic):
        super().__init__(name, price, quantity, sku)
        self.expiration_date = expiration_date
        self.is_organic = is_organic

    def display_info(self):
        return (f"Groceries(Name: {self.name}, Price: {self.price}, "
                f"Quantity: {self.quantity}, SKU: {self.sku}, "
                f"Expiration Date: {self.expiration_date}, Organic: {self.is_organic})")


class InventoryManagementSystem:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def total_inventory_value(self):
        total_value = sum(product.calculate_inventory_value() for product in self.products)
        return total_value

    def check_low_stock(self):
        low_stock_items = [product for product in self.products if product.is_low_stock()]
        return low_stock_items

    def display_inventory(self):
        for product in self.products:
            print(product.display_info())

