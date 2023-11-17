import unittest
from models.base import Base


class TestBase(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0
        self.my_obj1 = Base(14)
        self.my_obj2 = Base()
        self.my_obj3 = Base()
    def tearDown(self):
        pass

    def test_id(self):
        self.assertEqual(self.my_obj1.id, 14)
        self.assertEqual(self.my_obj2.id, 1)
        self.assertEqual(self.my_obj3.id, 2)

if __name__ == "__main__":
    unittest.main()
