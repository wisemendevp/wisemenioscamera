#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class ownioscam;

@interface ownioscamController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
//{
//-(BOOL) shouldAutorotate;
-(NSUInteger) supportedInterfaceOrientations;
//IBOutlet UIImageView *ImageView;
//}

// Action method
-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

// Action method
-(IBAction) cancel:(id)sender forEvent:(UIEvent*)event;


@property (strong, nonatomic) IBOutlet UIImageView *ImageView;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) ownioscam* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;

- (IBAction)Flasheventfire:(id)sender;


@property (strong, nonatomic) IBOutlet UIToolbar *Toolbarproperty;


@property (strong, nonatomic) IBOutlet UIBarButtonItem *Flashproperty;
- (IBAction)FlashEvent:(id)sender;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *AutoProperty;
- (IBAction)AutoEvent:(id)sender;


@property (strong, nonatomic) IBOutlet UIBarButtonItem *Onproperty;


- (IBAction)onEvent:(id)sender;


@property (strong, nonatomic) IBOutlet UIBarButtonItem *OffProperty;

- (IBAction)OffEvent:(id)sender;










@end