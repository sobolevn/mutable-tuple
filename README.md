# mutable_tuple

[![test](https://github.com/sobolevn/mutable-tuple/actions/workflows/test.yml/badge.svg?branch=master&event=push)](https://github.com/sobolevn/mutable-tuple/actions/workflows/test.yml)

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


## Install

```bash
pip install git+https://github.com/sobolevn/mutable-tuple.git
```


## License

[WTFPL](https://en.wikipedia.org/wiki/WTFPL)
