#include <iostream>
#include <vector>
#include <algorithm>

// Define a struct to represent a beverage
struct Beverage {
    std::string name;
    std::string type;
    float alcoholPercentage;
    float price;
    std::string brand; // New field for brand
};

// Function to display a beverage
void displayBeverage(const Beverage& beverage) {
    std::cout << "Name: " << beverage.name << "\n";
    std::cout << "Type: " << beverage.type << "\n";
    std::cout << "Brand: " << beverage.brand << "\n";
    std::cout << "Alcohol Percentage: " << beverage.alcoholPercentage << "%\n";
    std::cout << "Price: $" << beverage.price << "\n";
    std::cout << "------------------------\n";
}

// Function to recommend beverages based on user preferences
void recommendBeverages(const std::vector<Beverage>& beverages, float maxPrice, float minAlcoholPercentage) {
    std::cout << "\nRecommendations:\n";
    for (const auto& beverage : beverages) {
        if (beverage.price <= maxPrice && beverage.alcoholPercentage >= minAlcoholPercentage) {
            displayBeverage(beverage);
        }
    }
}

int main() {
    // Sample beverages with categories, subcategories, brands, and prices
   std::vector<Beverage> beverages = {
       //whiskey
        {"Jack Daniel's Old No. 7", "Whiskey", 40.0, 30.0, "Jack Daniel's"},
        {"Johnnie Walker Black Label", "Whiskey", 40.0, 35.0, "Johnnie Walker"},
        {"Dewars 18", "Whiskey", 40.0, 30.0, "Dewars"},
        {"Black Dog Reserve", "Whiskey", 40.0, 30.0, "Black Dog"},
        {"Glenkinchie 12", "Whiskey", 40.0, 30.0, "Glenkinchie"},
        {"Glenmorangie 10-Year Original", "Whiskey", 40.0, 30.0, "Glenmorangie"},
        {"Glenfiddich 12", "Whiskey", 40.0, 30.0, "Glenfiddich"},
        {"Ballantine's 12-Year", "Whiskey", 40.0, 30.0, "Ballentines"},
        {"Talisker 10", "Whiskey", 40.0, 30.0, "Talisker"},
        {"Jim Beam Bourbon Black", "Whiskey", 40.0, 30.0, "Jim Beam"},
        {"Monkey Shoulder", "Whiskey", 40.0, 30.0, "Monkey Shoulder"},
        {"Amrut Fusion Single Malt Whisky", "Whiskey", 40.0, 30.0, "Amrut"},
        {"Jameson", "Whiskey", 40.0, 30.0, "Jameson"},
        {"Johnnie Walker Red Label", "Whiskey", 40.0, 30.0, "Johnnie Walker"},
        {"Indri", "Whiskey", 40.0, 30.0, "Indri"},
        {"Seagrams 100 Pipers Deluxe", "Whiskey", 40.0, 30.0, "100 Pipers"},
        {"Teacher's Highland Cream", "Whiskey", 40.0, 30.0, "Teachers"},
        {"Vat 69", "Whiskey", 40.0, 30.0, "Vat 69"},
        {"McDowell's No.1 Platinum", "Whiskey", 40.0, 30.0, "McDowells"},
        {"Blender's Pride", "Whiskey", 40.0, 30.0, "Blender's Pride"},
        {"Royal Challenge", "Whiskey", 40.0, 30.0, "Royal Challenge"},
        {"Royal Stag", "Whiskey", 40.0, 30.0, "Royal Stag"},
        {"Imperial Blue", "Whiskey", 40.0, 30.0, "Imperial Blue"},
        {"Director's Special", "Whiskey", 40.0, 30.0, "Director's Special"},
        {"Bagpiper", "Whiskey", 40.0, 30.0, "Bagpiper"},
        {"Officer's Choice", "Whiskey", 40.0, 30.0, "Officer's Choice"},
        {"Old Tavern", "Whiskey", 40.0, 30.0, "Old Tavern"},
        {"Oak & Glow", "Whiskey", 40.0, 30.0, "Oak & Glow"},
        {"Rockford Classic", "Whiskey", 40.0, 30.0, "Rockford"},
        {"Rockford Reserve", "Whiskey", 40.0, 30.0, "Rockford"},
        {"Green Label", "Whiskey", 40.0, 30.0, "Label"},
        {"Blue Label", "Whiskey", 40.0, 30.0, "Label"},
        {"Black Label", "Whiskey", 40.0, 30.0, "Label"},
        {"Double Black Label", "Whiskey", 40.0, 30.0, "Label"},
        {"Red Label", "Whiskey", 40.0, 30.0, "Label"},
        {"Chivas Regal 12 years", "Whiskey", 40.0, 45.0, "Chivas Regal"},
        //Vodka
        {"Grey Goose", "Vodka", 40.0, 40.0, "Grey Goose"},
        {"Smoke", "Vodka", 40.0, 40.0, "Smoke"},
        {"Magic Moments", "Vodka", 40.0, 40.0, "Magic Moments"},
        {"Absolute", "Vodka", 40.0, 40.0, "Absolute"},
        {"One More", "Vodka", 40.0, 40.0, "One More"},
        {"Smirnoff no 21", "Vodka", 40.0, 40.0, "Smirnoff no 21"},
        {"Ciroc", "Vodka", 40.0, 40.0, "Ciroc"},
        {"Belvedere", "Vodka", 40.0, 40.0, "Belvedere"},
        {"Finlandia Vodka ", "Vodka", 40.0, 40.0, "Finlandia Vodka "},
        {"Ketelone", "Vodka", 40.0, 40.0, "Ketelone"},
        {"Beluga", "Vodka", 40.0, 40.0, "Beluga"},
        {"Absolut Elyx", "Vodka", 40.0, 40.0, "Absolut Elyx"},
        
        //Beer
        {"Bro Code", "Beer", 5.0, 5.0, "Bro Code"},
        {"Tuborg", "Beer", 5.0, 5.0, "Tuborg"},
        {"Bira Boom", "Beer", 5.0, 5.0, "Bira Boom"},
        {"Bira White", "Beer", 5.0, 5.0, "Bira white"},
        {"Carlsberg", "Beer", 5.0, 5.0, "Carlsberg"},
        {"breezer", "Beer", 5.0, 5.0, "Breezer"},
        {"Budwiser Magnum", "Beer", 5.0, 5.0, "Budwiser Magnum"},
        {"Corona", "Beer", 5.0, 5.0, "Corona"},
        {"Kingfisher", "Beer", 5.0, 5.0, "Kingfisher"},
        {"Godfather", "Beer", 5.0, 5.0, "Godfather"},
        {"Bira 91", "Beer", 5.0, 5.0, "Bira 91"},
        {"Heineken", "Beer", 5.0, 5.0, "Heineken"},
        //Brandy
        {"McDowell’s Brandy ", "Brandy", 5.0, 5.0, "McDowell’s Brandy "},
        {"Remy Martin Excellence Brandy  ", "Brandy", 5.0, 5.0, "Remy Martin Excellence Brandy  "},
        {"Hennessy Brandy Price ", "Brandy", 5.0, 5.0, "Hennessy Brandy Price "},
        {"Old Admiral", "Brandy", 5.0, 5.0, "Old Admiral Price"},
        {"Golden Grapes Brandy ", "Brandy", 5.0, 5.0, "Golden Grapes Brandy"},
        {"Honey Bee Brandy ", "Brandy", 5.0, 5.0, "Honey Bee Brandy "},
        {"Courrier Napoleon ", "Brandy", 5.0, 5.0, "Courrier Napoleon"},
        {"Courvoisier ", "Brandy", 5.0, 5.0, "Courvoisier"},
        {"John Exshaw Brandy", "Brandy", 5.0, 5.0, "John Exshaw Brandy"},
        {"Clovis Brandy ", "Brandy", 5.0, 5.0, "Clovis Brandy"},
        //Wine
        {"Chandon Brut Rosé NV", "Wine", 12.0, 15.0, "Chandon Brut Rosé NV"},
        {" Zampa Soirée Brut by Grover Zampa", "Wine", 12.0, 15.0, " Zampa Soirée Brut by Grover Zampa"},
        {" The Source Grenache Rosé by Sula Vineyards", "Wine", 12.0, 15.0, " The Source Grenache Rosé by Sula Vineyards"},
        {"Vallonné Vineyards Rosé", "Wine", 12.0, 15.0, "Vallonné Vineyards Rosé"},
        {"Charosa Selection Sauvignon Blanc", "Wine", 12.0, 15.0, "Charosa Selection Sauvignon Blanc"},
        {"H Block Chardonnay by York Winery", "Wine", 12.0, 15.0, "H Block Chardonnay by York Winery"},
        {"J’NOON White by Fratelli Vineyards", "Wine", 12.0, 15.0, "J’NOON White by Fratelli Vineyards"},
        {"The Source Sauvignon Blanc Reserve by Sula Vineyards", "Wine", 12.0, 15.0, "The Source Sauvignon Blanc Reserve by Sula Vineyards"},
        {" Chêne Grande Reserve by Grover Zampa", "Wine", 12.0, 15.0, " Chêne Grande Reserve by Grover Zampa"},
        {"KRSMA Estates Cabernet Sauvignon", "Wine", 12.0, 15.0, "KRSMA Estates Cabernet Sauvignon"},
        {"Reveilo Nero d’Avola", "Wine", 12.0, 15.0, "Reveilo Nero d’Avola"},
        {"SETTE by Fratelli Vineyards", "Wine", 12.0, 15.0, "SETTE by Fratelli Vineyards"},
        //Rum
        {"Old Monk", "Rum", 20.0, 12.0, "Old Monk"},
        {"Contessa", "Rum", 20.0, 12.0, "Contessa"},
        {"Bacardi Black", "Rum", 20.0, 12.0, "Bacardi Black"},
        {"Captain Morgan", "Rum", 20.0, 12.0, "Captain Morgan"},
        {"Makazai", "Rum", 20.0, 12.0, "Makazai"},
        {"Jolly Roger", "Rum", 20.0, 12.0, "Jolly Roger"},
        {"El Dorado", "Rum", 20.0, 12.0, "El Dorado"},
        {"Malibu", "Rum", 20.0, 12.0, "Malibu"},
        {"Indies", "Rum", 20.0, 12.0, "Indies"},
        {"Hercules", "Rum", 20.0, 12.0, "Hercules"},
        {"Rock Paper Rum", "Rum", 20.0, 12.0, "Rock Paper Rum"},
        {"Havana Club", "Rum", 20.0, 12.0, "Havana Club"},
        //Cocktails & Mixers
        {"Bab Louie & Co. - Best Cocktail Mixers Brand", "Cocktail", 20.0, 12.0, "Bab Louie & Co. - Best Cocktail Mixers Brand"},
        {"Jimmy’s Cocktails", "Cocktail", 15.0, 10.0, "Jimmy’s Cocktails"},
        {"Stirred Cocktail Mixers", "Cocktail", 15.0, 10.0, "Stirred Cocktail Mixers"},
        {"Swa Artisanal Syrups", "Cocktail", 15.0, 10.0, "Swa Artisanal Syrups"},
        {"Jade Forest Tonic Water", "Cocktail", 15.0, 10.0, "Jade Forest Tonic Water"},
        {"Sepoy & Co. Cocktail Mixers", "Cocktail", 15.0, 10.0, "Sepoy & Co. Cocktail Mixers"},
        {" Madhuloka House of Spirits", "Cocktail", 15.0, 10.0, " Madhuloka House of Spirits"},
        {" Artinci - Premium Cocktail Syrups", "Cocktail", 15.0, 10.0, " Artinci - Premium Cocktail Syrups"},
        {"  Fruit Forest - Natural Fruit Cocktail Mixers", "Cocktail", 15.0, 10.0, " Fruit Forest - Natural Fruit Cocktail Mixers"},
        {"Alchemy Cordials - Signature Cocktail Syrups", "Cocktail", 15.0, 10.0, " Alchemy Cordials - Signature Cocktail Syrups"},
        // Add more beverages as needed
    };

    char repeat;
    do {
        // Get user preferences
        int subCategoryChoice;
        float maxPrice, minAlcoholPercentage;

        std::cout << "Choose a subcategory:\n";
        std::cout << "1. Whiskey\n";
        std::cout << "2. Vodka\n";
        std::cout << "3. Rum\n";
        std::cout << "4. Brandy\n";
        std::cout << "5. Wine\n";
        std::cout << "6. Cocktails\n";
        std::cout << "Enter the number corresponding to your choice: ";
        std::cin >> subCategoryChoice;

        std::string preferredType;
        switch (subCategoryChoice) {
            case 1:
                preferredType = "Whiskey";
                break;
            case 2:
                preferredType = "Vodka";
                break;
            case 3:
                preferredType = "Rum";
                break;
            case 4:
                preferredType = "Brandy";
                break;
            case 5:
                preferredType = "Wine";
                break;
            case 6:
                preferredType = "Cocktails";
                break;
            default:
                std::cerr << "Invalid choice. Exiting.\n";
                return 1;
        }

        // Filter beverages based on user preferences
        std::vector<Beverage> filteredBeverages;
        for (const auto& beverage : beverages) {
            if (beverage.type == preferredType && beverage.price <= maxPrice && beverage.alcoholPercentage >= minAlcoholPercentage) {
                filteredBeverages.push_back(beverage);
            }
        }

        // Recommend beverages based on user preferences
        recommendBeverages(filteredBeverages, maxPrice, minAlcoholPercentage);

        std::cout << "Do you want another recommendation? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
