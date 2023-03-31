////////////////////////////////////////////////////////
class hospital
{
  private:
    string hosname;
    int num;
  public:
    int leftnum=50;
    hospital(string x,int=50);
    ~hospital();
    void operator--();
    void getinfo();
    string checkhosname();
    ///////////////////// NAME FUNCTION
    bool isempty();
    void enqueue(string value); ////////////////////
    void showfront();
    void displayQueue(); 
    void displaynameal(int x); 
    string returnnameal(int x); 
    ///////////////////// SUR FUNCTION
    bool Surisempty();
    void Surenqueue(string value);
    void Surshowfront();
    void SurdisplayQueue();
    void displaysural(int x);
    string returnsural(int x); 
    ///////////////////// AGE FUNCTION
    bool Ageisempty();
    void enqueue(int value); /////////////
    void Ageshowfront();
    void AgedisplayQueue();
    void AlldisplayQueue();
    void displayageal(int x);
    int returnageal(int x);
    ////////////////////////////////////////////////////////
    struct NameNode
    {
      string data;
      NameNode *link;
    };
      NameNode *front=NULL;
      NameNode *rear=NULL;
    ////////////////////////////////////////////////////////
    struct SurNode
    {
      string data;
      SurNode *Surlink;
    };
      SurNode *Surfront=NULL;
      SurNode *Surrear=NULL;
    ////////////////////////////////////////////////////////
    struct AgeNode
    {
      int data;
      AgeNode *Agelink;
    };
      AgeNode *Agefront=NULL;
      AgeNode *Agerear=NULL;
    ////////////////////////////////////////////////////////

};