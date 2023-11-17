#!/usr/bin/python3
"""Unittest for max_integer([..])
"""
import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):

    def test_max_at_end(self):
        self.assertEqual(max_integer([1, 2, 3, 4]), 4)

    def test_max_at_beginning(self):
        self.assertEqual(max_integer([4, 3, 2, 1]), 4)

    def test_max_in_middle(self):
        self.assertEqual(max_integer([1, 3, 5, 2, 4]), 5)

    def test_one_negative_number(self):
        self.assertEqual(max_integer([-1, 0, 1]), 1)

    def test_only_negative_numbers(self):
        self.assertEqual(max_integer([-1, -5, -2, -10]), -1)

    def test_list_of_one_element(self):
        self.assertEqual(max_integer([42]), 42)

    def test_empty_list(self):
        self.assertIsNone(max_integer([]))


if __name__ == "__main__":
    unittest.main()
