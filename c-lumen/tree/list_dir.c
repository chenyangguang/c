/*列出分级文件系统中的目录 */ 
static void
ListDir(DirectoryOrFile D, int Depth)
{
  if (D is a legitimate emtry)
    {
      PrintName(D, Depth);

      if(D is a directory)
        for each child, C, of D
          ListDir(C, Depth + 1);
    }
}

void ListDiretory(DirectoryOrFile D)
{
  ListDir(D, 0);
}

/*计算目录大小*/
static void SizeDiretory(DirectoryOrFile D)
{
  int TotalSize;

  TotalSize = 0;
  if(D is a legitimate entry)
    {
      TotalSize = FileSize(D);
      if(D is a directory)
        for each child, C, of D
          TotalSize += SizeDirectory(C);
    }
  return TotalSize;
}

