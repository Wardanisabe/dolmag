#include <fcntl.h>  // for open function and O_RDONLY flag
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> evdevNames = {"device1", "device2", "device3"};

    for (int i = 0; i < evdevNames.size(); ++i) {
        int device_fd = open(evdevNames[i].c_str(), O_RDONLY);
        if (device_fd == -1) {
            std::cerr << "Error opening device: " << evdevNames[i] << std::endl;
            // Handle error appropriately (e.g., return, continue, or exit)
        } else {
            std::cout << "Successfully opened device: " << evdevNames[i] << std::endl;
            // Use device_fd for reading data from the device
            // Example: read(device_fd, buffer, buffer_size);
        }
    }

    return 0;
}
