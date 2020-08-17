import unittest
import binary_search


class TestMethods(unittest.TestCase):
    def test_1(self):
        self.assertEqual(binary_search.find([0, 1, 21, 33, 45, 45, 61, 71, 72, 73], 33), 3)

if __name__ == '__main__':
    # begin the unittest.main()
    unittest.main()