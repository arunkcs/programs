/* Demo of Resource Acquisition Is Initialization */

#include <iostream>
#include <string>

using namespace std;

class ResourceGuard {
  private:
    const string resource;
  public:
    ResourceGuard(const std::string& res) : resource(res) {
      cout << "Acquire the " << resource << endl;
    }
    ~ResourceGuard() {
      cout << "Release the " << resource << endl;
    }
};

int main() {

  cout << endl;

  ResourceGuard resGuard1("memoryBlock1");

  cout << "Before the local scope" << endl;
  {
    ResourceGuard resGuard2("memoryBlock2");
  }
  cout << "After the local scope" << endl;

  cout << "Before try-catch block" << endl;
  try {
    ResourceGuard resGuard3("memoryBlock3");
    throw std::bad_alloc();
  }
  catch(std::bad_alloc &e) {
    cout << e.what() <<endl;
  }
  cout << "After try-catch block" << endl;

  cout << endl;

}
