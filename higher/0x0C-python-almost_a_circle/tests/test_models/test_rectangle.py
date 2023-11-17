import unittest
from models.rectangle import Rectangle
from models.base import Base


class TestRectangle(unittest.TestCase):
    
    def setUp(self):
        Base._Base__nb_objects = 0
        self.obj1 = Rectangle(10, 20, 5, 5)
        self.obj2 = Rectangle(15, 30, 6, 6, 79)
        self.obj3 = Rectangle(20, 40, 7, 7)
    def tearDown(self):
        pass

    def test_rectangle_id(self):
        self.assertEqual(self.obj1.id, 1)
        self.assertEqual(self.obj2.id, 79)
        self.assertEqual(self.obj3.id, 2)

    def test_get_width(self):
        self.assertEqual(self.obj1.width, 10)

    def test_set_width(self):
        self.obj2.width = 20
        self.assertEqual(self.obj2.width, 20)

    def test_get_height(self):
        self.assertEqual(self.obj1.height, 20)

    def test_set_height(self):
        self.obj2.height = 40
        self.assertEqual(self.obj2.height, 40)

    def test_get_x(self):
        self.assertEqual(self.obj1.x, 5)

    def test_set_x(self):
        self.obj2.x = 10
        self.assertEqual(self.obj2.x, 10)

    def test_get_y(self):
        self.assertEqual(self.obj1.y, 5)

    def test_set_y(self):
        self.obj2.y = 10
        self.assertEqual(self.obj2.y, 10)

    def test_area(self):
        r = Rectangle(4, 5)
        self.assertEqual(r.area(), 20)

    def test_str(self):
        r = Rectangle(4, 5, 1, 2, 10)
        self.assertEqual(str(r), "[Rectangle] (10) 1/2 - 4/5")

if __name__ == "__main__":
    unittest.main()
