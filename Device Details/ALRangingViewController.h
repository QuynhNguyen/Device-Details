/*
     File: ALRangingViewController.h
 Abstract: View controller that illustrates how to start and stop ranging for a beacon region.
 
  Version: 1.0
*/

#import <UIKit/UIKit.h>
//#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
@interface ALRangingViewController : UITableViewController <
//CLLocationManagerDelegate,
CBPeripheralDelegate, CBCentralManagerDelegate> {
    CBCentralManager *centralManager;
    NSDictionary *options;
}

@end
