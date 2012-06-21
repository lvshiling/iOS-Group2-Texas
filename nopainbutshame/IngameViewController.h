//
//  IngameViewController.h
//  nopainbutshame
//
//  Created by Riza Koray Alpdogan on 12.05.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TexasHolemGame.h"
#import "drawCircle.h"
#import "PackOfCards.h"
@interface IngameViewController : UIViewController
{
    IBOutlet UILabel *spielereins;
    IBOutlet UILabel *spielerzwei;
    IBOutlet UILabel *spielerdrei;
    IBOutlet UILabel *spielervier;
    IBOutlet UILabel *spielerfunf;

    IBOutlet UILabel *spielereinsstat;
    IBOutlet UILabel *spielerzweistat;
    IBOutlet UILabel *spielerdreistat;
    IBOutlet UILabel *spielervierstat;
    IBOutlet UILabel *spielerfunfstat;
   
    int spielereinsgeld;
    int spielerzweigeld;
    int spielerdreigeld;
    int spielerviergeld;
    int spielerfunfgeld;
    
    TexasHolemGame *texas;
    PackOfCards     *packofcards;

 IBOutlet drawCircle *myView;
  
   
  

}
-(IBAction)buttonToTriggerCircle:(id)sender;
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
@end
