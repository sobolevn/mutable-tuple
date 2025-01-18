from unittest import TestCase, main

import mutable_tuple


class TestSetItem(TestCase):
    def test_mutates_existing(self):
        to_mutate = (1, 2)

        mutable_tuple.set_item(to_mutate, 0, 3)

        self.assertEqual(to_mutate, (3, 2))

    def test_raises_index(self):
        self.assertRaises(IndexError, mutable_tuple.set_item, (), 0, 3)
        self.assertRaises(IndexError, mutable_tuple.set_item, (1,), 1, 3)

    def test_raises_not_a_tuple(self):
        self.assertRaises(TypeError, mutable_tuple.set_item, 1, 0, 3)

    def test_raise_bad_args(self):
        self.assertRaises(TypeError, mutable_tuple.set_item, ())
        self.assertRaises(TypeError, mutable_tuple.set_item, (), 'a')
        self.assertRaises(TypeError, mutable_tuple.set_item, (), 'a', 2)

if __name__ == '__main__':
    main()
