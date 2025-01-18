from setuptools import setup, Extension


setup(
    name='mutable_tuple',
    version='0.1.0',
    description='Mutate your tuples!',
    author='Nikita Sobolev',
    author_email='mail@sobolevn.me',
    ext_modules=[
        Extension('mutable_tuple', ['mutable_tuple/mod.c']),
    ],
)
