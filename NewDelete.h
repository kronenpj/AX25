#ifndef NEW_DELETE_H
#define NEW_DELETE_H

void * operator new(size_t size);

void operator delete(void * ptr);

void * operator new(size_t size)
{
  return malloc(size);
}

void operator delete(void * ptr)
{
  if (ptr!=NULL) {
    free(ptr);
  }
}

#endif
