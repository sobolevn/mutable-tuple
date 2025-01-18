# mutable_tuple

[![test](https://github.com/sobolevn/mutable-tuple/actions/workflows/test.yaml/badge.svg?branch=master&event=push)](https://github.com/sobolevn/mutable-tuple/actions/workflows/test.yaml)

Mutates your tuples.

Please, don't use this!


## Usage

```python
>>> import mutable_tuple

>>> x = (1, 2)
>>> mutable_tuple.set_item(x, 0, 5)

>>> x
(5, 2)
```

😱

Docs about what is going on: [`PyTuple_SET_ITEM` C-API](https://docs.python.org/3/c-api/tuple.html#c.PyTuple_SET_ITEM)


## Install

```bash
pip install git+https://github.com/sobolevn/mutable-tuple.git
```


## License

[WTFPL](https://en.wikipedia.org/wiki/WTFPL)
