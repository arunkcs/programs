/* Demo of std::unique_ptr */

#include <iostream>
#include <memory>

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
    void print() {
      cout << "print() called" << endl;
    }
};

int main() {

  cout << endl;

  {
    std::unique_ptr<ResourceGuard> resGuard1(new ResourceGuard("memoryBlock1"));
    resGuard1->print();
    //std::unique_ptr<ResourceGuard> resGuard2 = resGuard1; //Cant copy an existing std::unique_ptr !!
  }

  cout << endl;
}
