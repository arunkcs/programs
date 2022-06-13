/* Demo of std::shared_ptr */

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

  std::shared_ptr<ResourceGuard> resGuard1;
  {
    std::shared_ptr<ResourceGuard> resGuard2(new ResourceGuard("memoryBlock1"));
    resGuard1 = resGuard2; //Can copy a shared pointer to another shared pointer
    resGuard1->print();
  }

  // The resGuard2 object wont destruct here as resGuard1 still holding its address !!

  cin.get();

  cout << endl;
}
