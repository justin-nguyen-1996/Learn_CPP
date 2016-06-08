double getDouble()
{
    while (1) // Loop until user enters a valid input
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;
 
        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767,'\n'); // and remove the bad input
        }
        else // nope, so return our good x
            return x;
    }
}
