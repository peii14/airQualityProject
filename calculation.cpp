//
// Created by pei on 29/11/2021.
//

#include "calculation.h"

Calculation::Calculation() {
    startInterval =QDateTime::currentDateTime();
    endInterval = QDateTime::currentDateTime();
    sensors = -1;

    sensor0.setLatitude(-8.15758888291083);
    sensor0.setLongitude(-34.7692487876719);
    sensor1.setLatitude(-30.0647387677174);
    sensor1.setLongitude(-76.3439147576429);
    sensor2.setLatitude(38.9221784071634);
    sensor2.setLongitude(-89.2363721594384);
    sensor3.setLatitude(-5.92154786033628);
    sensor3.setLongitude(75.2608366614491);
    sensor4.setLatitude(-10.0514503172838);
    sensor4.setLongitude(87.5506518210986);
    sensor5.setLatitude(11.8876924118435);
    sensor5.setLongitude(67.0476760328969);
    sensor6.setLatitude(-23.6333200096308);
    sensor6.setLongitude(-71.2536555348214);
    sensor7.setLatitude(16.3216940040335);
    sensor7.setLongitude(-86.1531723924694);
    sensor8.setLatitude(-4.1832184228968);
    sensor8.setLongitude(52.6153151610006);
    sensor9.setLatitude(36.2756694672982);
    sensor9.setLongitude(1.33005024461543);

    sens0 <<"";
    sens1 <<"";
    sens2 <<"";
    sens3 <<"";
    sens4 <<"";
    sens5 <<"";
    sens6 <<"";
    sens7 <<"";
    sens8 <<"";
    sens9 <<"";

    this->root = NULL;
    qDebug() << "thread serial:" << QThread::currentThreadId();
}

Calculation::~Calculation(){
    qDebug()<<"calculation deleted";

}
void Calculation::run(){
//    qDebug()<<startInterval<<" "<<endInterval<<" "<<sensors;
//    AVL tree;
//    tree.root = tree.insert(tree.root,average);
}

void Calculation::searching(QDateTime start,QDateTime end,int sensor) {
    mtx.lock();
    startInterval = start;
    endInterval = end;
    sensors = sensor;
    mtx.unlock();
    Read::readInRange(startInterval,endInterval);
    encapsulation(wordList);
    calcAttribute(sensors);
}

void Calculation::calcAttribute(int whichSensor) {
    Calculation tree;

    if(!sens0.isEmpty()){
        att03 = sens0.filter("O3");
        attso2 = sens0.filter("SO2");
        attno2 = sens0.filter("NO2");
        attpm10 = sens0.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,0,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 0){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor0);
        }

    }
    if(!sens1.isEmpty()){
        att03 = sens1.filter("O3");
        attso2 = sens1.filter("SO2");
        attno2 = sens1.filter("NO2");
        attpm10 = sens1.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,1,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 1){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor1);
        }
    }
    if(!sens2.isEmpty()){
        att03 = sens2.filter("O3");
        attso2 = sens2.filter("SO2");
        attno2 = sens2.filter("NO2");
        attpm10 = sens2.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);
        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,2,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 2){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor2);
        }

    }
    if(!sens3.isEmpty()){
        att03 = sens3.filter("O3");
        attso2 = sens3.filter("SO2");
        attno2 = sens3.filter("NO2");
        attpm10 = sens3.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,3,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 3){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor3);
        }
    }
    if(!sens4.isEmpty()){
        att03 = sens4.filter("O3");
        attso2 = sens4.filter("SO2");
        attno2 = sens4.filter("NO2");
        attpm10 = sens4.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,4,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 4){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor4);
        }
    }
    if(!sens5.isEmpty()){
        att03 = sens5.filter("O3");
        attso2 = sens5.filter("SO2");
        attno2 = sens5.filter("NO2");
        attpm10 = sens5.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,5,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 5){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor5);
        }
    }
    if(!sens6.isEmpty()){
        att03 = sens6.filter("O3");
        attso2 = sens6.filter("SO2");
        attno2 = sens6.filter("NO2");
        attpm10 = sens6.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,6,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 6){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor6);
        }
    }
    if(!sens7.isEmpty()){
        att03 = sens7.filter("O3");
        attso2 = sens7.filter("SO2");
        attno2 = sens7.filter("NO2");
        attpm10 = sens7.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,7,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 7){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor7);
        }
    }
    if(!sens8.isEmpty()){
        att03 = sens8.filter("O3");
        attso2 = sens8.filter("SO2");
        attno2 = sens8.filter("NO2");
        attpm10 = sens8.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,8,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 8){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor8);
        }
    }
    if(!sens9.isEmpty()){
        att03 = sens9.filter("O3");
        attso2 = sens9.filter("SO2");
        attno2 = sens9.filter("NO2");
        attpm10 = sens9.filter("PM10");

        avgo3 = calcAverage(att03);
        avgno2 = calcAverage(attno2);
        avgso2 = calcAverage(attso2);
        avgpm10 = calcAverage(attpm10);

        if(avgo3<100&&avgso2<200&&avgno2<120&&avgpm10<80){
            isSafe = true;
        }else isSafe = false;
        double sd = (avgo3+avgno2+avgso2+avgpm10)/4;
        tree.root = tree.insert(tree.root,sd,9,avgo3,avgno2,avgso2,avgpm10);
        if(whichSensor == 9){
            findApproximate = sd;
            emit dataToUI(isSafe, avgo3,avgno2,avgso2,avgpm10);
            emit dataToMarker(sensor9);
        }
    }
    printBT(tree.root);
    closestKValues(tree.root,findApproximate,5);
    emit dataApptoxiamtion(ret,sen,att1,att2,att3,att4);
}
double Calculation::calcAverage(QStringList average) {
    int totalData = average.count();
    std::string strAverage = average.join(";").toStdString();
    std::string delimiter = ";";
    size_t pos = 0;
    int counter=1;
    double total;
    std::string token;
    while ((pos = strAverage.find(delimiter)) != std::string::npos) {
        token = strAverage.substr(0, pos);
        if(counter%4 == 0){

            total += stod(token.c_str());
        }
        strAverage.erase(0, pos + delimiter.length());
        counter++;
    }
//    qDebug()<<strAverage;
    if(!strAverage.empty())
        total += stod(strAverage);
    return total/totalData;
}

double Calculation::calcSD(double data[]) {
    double sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for(i = 0; i < 10; ++i)
        sum += data[i];
    mean = sum / 10;
    for(i = 0; i < 10; ++i)
        standardDeviation += pow(data[i] - mean, 2);
    return sqrt(standardDeviation / 10);
}

void Calculation::encapsulation(QStringList words) {
    sens0 = words.filter("Sensor0");
    sens1 = words.filter("Sensor1");
    sens2 = words.filter("Sensor2");
    sens3 = words.filter("Sensor3");
    sens4 = words.filter("Sensor4");
    sens5 = words.filter("Sensor5");
    sens6 = words.filter("Sensor6");
    sens7 = words.filter("Sensor7");
    sens8 = words.filter("Sensor8");
    sens9 = words.filter("Sensor9");

}

int Calculation::calheight(struct node *p){

    if(p->left && p->right){
        if (p->left->height < p->right->height)
            return p->right->height + 1;
        else return  p->left->height + 1;
    }
    else if(p->left && p->right == NULL){
        return p->left->height + 1;
    }
    else if(p->left ==NULL && p->right){
        return p->right->height + 1;
    }
    return 0;

}
int Calculation::bf(struct node *n){
    if(n->left && n->right){
        return n->left->height - n->right->height;
    }
    else if(n->left && n->right == NULL){
        return n->left->height;
    }
    else if(n->left== NULL && n->right ){
        return -n->right->height;
    }
}
struct node * Calculation::llrotation(struct node *n){
    struct node *p;
    struct node *tp;
    p = n;
    tp = p->left;

    p->left = tp->right;
    tp->right = p;

    return tp;
}
struct node * Calculation::rrrotation(struct node *n){
    struct node *p;
    struct node *tp;
    p = n;
    tp = p->right;

    p->right = tp->left;
    tp->left = p;

    return tp;
}
struct node * Calculation::rlrotation(struct node *n){
    struct node *p;
    struct node *tp;
    struct node *tp2;
    p = n;
    tp = p->right;
    tp2 =p->right->left;

    p -> right = tp2->left;
    tp ->left = tp2->right;
    tp2 ->left = p;
    tp2->right = tp;

    return tp2;
}
struct node * Calculation::lrrotation(struct node *n){
    struct node *p;
    struct node *tp;
    struct node *tp2;
    p = n;
    tp = p->left;
    tp2 =p->left->right;

    p -> left = tp2->right;
    tp ->right = tp2->left;
    tp2 ->right = p;
    tp2->left = tp;

    return tp2;
}
struct node* Calculation::insert(struct node *r,int data,int sens,double atto3,double attno2,double attso2,double attpm10){
    if(r==NULL){
        struct node *n;
        n = new struct node;
        n->data = data;
        n->sensor = sens;
        n->o3 = atto3;
        n->no2 = attno2;
        n->so2 = attso2;
        n->pm10 = attpm10;
        r = n;
        r->left = r->right = NULL;
        r->height = 1;
        return r;
    }
    else{
        if(data < r->data)
            r->left = insert(r->left,data,sens,atto3,attno2,attso2,attpm10);
        else
            r->right = insert(r->right,data,sens,atto3,attno2,attso2,attpm10);
    }

    r->height = Calculation::calheight(r);

    if(Calculation::bf(r)==2 && Calculation::bf(r->left)==1){
        r = llrotation(r);
    }
    else if(Calculation::bf(r)==-2 && Calculation::bf(r->right)==-1){
        r = rrrotation(r);
    }
    else if(Calculation::bf(r)==-2 && Calculation::bf(r->right)==1){
        r = rlrotation(r);
    }
    else if(Calculation::bf(r)==2 && Calculation::bf(r->left)==-1){
        r = lrrotation(r);
    }

    return r;

}
void Calculation::levelorder_newline(){
    if (this->root == NULL){
        cout<<"\n"<<"Empty tree"<<"\n";
        return;
    }
    levelorder_newline(this->root);
}
void Calculation::levelorder_newline(struct node *v){
    queue <struct node *> q;
    struct node *cur;
    q.push(v);
    q.push(NULL);

    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(cur == NULL && q.size()!=0){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        if(cur!=NULL){
            cout<<" "<<cur->data;
            if (cur->left!=NULL){
                q.push(cur->left);
            }
            if (cur->right!=NULL){
                q.push(cur->right);
            }
        }
    }
}

struct node * Calculation::deleteNode(struct node *p,int data){

    if(p->left == NULL && p->right == NULL){
        if(p==this->root)
            this->root = NULL;
        delete p;
        return NULL;
    }

    struct node *t;
    struct node *q;
    if(p->data < data){
        p->right = deleteNode(p->right,data);
    }
    else if(p->data > data){
        p->left = deleteNode(p->left,data);
    }
    else{
        if(p->left != NULL){
            q = inpre(p->left);
            p->data = q->data;
            p->left=deleteNode(p->left,q->data);
        }
        else{
            q = insuc(p->right);
            p->data = q->data;
            p->right = deleteNode(p->right,q->data);
        }
    }

    if(bf(p)==2 && bf(p->left)==1){ p = llrotation(p); }
    else if(bf(p)==2 && bf(p->left)==-1){ p = lrrotation(p); }
    else if(bf(p)==2 && bf(p->left)==0){ p = llrotation(p); }
    else if(bf(p)==-2 && bf(p->right)==-1){ p = rrrotation(p); }
    else if(bf(p)==-2 && bf(p->right)==1){ p = rlrotation(p); }
    else if(bf(p)==-2 && bf(p->right)==0){ p = llrotation(p); }


    return p;
}
struct node* Calculation::inpre(struct node* p){
    while(p->right!=NULL)
        p = p->right;
    return p;
}
struct node* Calculation::insuc(struct node* p){
    while(p->left!=NULL) p = p->left;
    return p;
}

void Calculation::printBT(const std::string& prefix, const node* node, bool isLeft){
    if( node != nullptr ){
        std::cout << prefix;
        std::cout << (isLeft ? "├──" : "└──" );
        std::cout << node->data << std::endl;
        printBT( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void Calculation::printBT(const node* node)
{
    printBT("", node, false);
}
void Calculation::pushSmaller(node* nodes, stack <node*>& st, double target){
    while (nodes) {
        if (nodes->data < target) {
            st.push(nodes);
            nodes = nodes->right;
        }
        else {
            nodes = nodes->left;
        }
    }
}
void Calculation::pushLarger(node* nodes, stack <node*>& st, double target){
    while(nodes) {
        if (nodes->data >= target) {
            st.push(nodes);
            nodes = nodes->left;
        }
        else
            nodes = nodes->right;
    }
}

void Calculation::closestKValues(node* root, double target, int k){

    stack<node*> smaller;
    stack<node*> larger;
    pushLarger(root, larger, target);
    pushSmaller(root, smaller, target);
    while (k--) {
        if (!smaller.empty() && (larger.empty() || (abs(target - smaller.top()->data) < abs(target - larger.top()->data)))) {
            node* curr = smaller.top();
            smaller.pop();
            ret.push_back(curr->data);
            sen.push_back(curr->sensor);
            att1.push_back(curr->o3);
            att2.push_back(curr->no2);
            att3.push_back(curr->so2);
            att4.push_back(curr->pm10);
            pushSmaller(curr->left, smaller, target);
        }
        else {
            node* curr = larger.top();
            larger.pop();
            ret.push_back(curr->data);
            sen.push_back(curr->sensor);
            att1.push_back(curr->o3);
            att2.push_back(curr->no2);
            att3.push_back(curr->so2);
            att4.push_back(curr->pm10);

            pushLarger(curr->right, larger, target);
        }
    }

}



