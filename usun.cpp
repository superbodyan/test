void usun(int ktoryUsunac)
{

    int max = pacjenci[0]->id;

    for (int i = 1; i < zaOstatnim; i++)
    {
        if (pacjenci[i]->id > max)
        {
            max = pacjenci[i]->id;
        }
    }


    if (ktoryUsunac > max) 
    {
        return;
    }


    for (int i = 0; i < zaOstatnim; i++)
    {
        if (pacjenci[i]->id == ktoryUsunac)
        {
            ktoryUsunac = i;
            delete pacjenci[ktoryUsunac];

        }
    }
    zaOstatnim--;

    if (ktoryUsunac == zaOstatnim)
    {
        pacjenci[ktoryUsunac] = NULL;
    }
    else
    {
        pacjenci[ktoryUsunac] = pacjenci[zaOstatnim];
        pacjenci[zaOstatnim] = NULL;
    }
}
