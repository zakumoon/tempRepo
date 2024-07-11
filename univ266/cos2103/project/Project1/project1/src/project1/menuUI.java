
package project1;
import javax.swing.table.DefaultTableModel;

//@author zk

public class menuUI extends javax.swing.JFrame {

    int pId[] = new int[100];
    String pName[] = new String[100];
    int pType[] = new int[100];
    float pPrice[] = new float[100];
    int row = 0;
    
    //Insert
    public void Insert(int pos, int row){
        int j = row;
        while (j >= pos){
            pId[j +1 ] = pId[j];
            pName[j +1 ] = pName[j];
            pType[j +1 ] = pType[j];
            pPrice[j +1 ] = pPrice[j];  
          j--;
        }
        pId[pos] = Integer.parseInt(jTextId.getText());
        pName[pos]= jTextName.getText();
        pType[pos] = Integer.parseInt(jTextType.getText());
        pPrice[pos] = Float.parseFloat(jTextPrice.getText());        
    row++;
    }
    
    //delete 
    public void Delete(int k){
        jTextId.setText(String.valueOf(pId[k]));
        jTextName.setText(pName[k]);
        jTextType.setText(String.valueOf(pType[k]));
        jTextPrice.setText(String.valueOf(pPrice[k]));
        
        for (int i = k; i < row; i++){
            pId[k] = pId[k +1];
            pName[k] = pName[k +1];
            pType[k] = pType[k +1];
            pPrice[k] = pPrice[k +1];
        
        }
        row--;  
    }
    
    //Search
     public int Search(int k){
        int bas = 0;
        int loc = -1;
        
        while (bas <= row){
            if (pId[bas] == k ){
                loc = bas;
                return loc;
            }
            else{
                bas++;
            }
        }return loc;
        
    }
     
     //sort
         public void Sort(){
        for (int i = 0; i <= row; i++){
            int k =0;
            while (k <= row-i-1){
                if(pId[k] > pId[k+1]){
                    int tId = pId[k];
                    String tName = pName[k];
                    int tType = pType[k];
                    float tPrice = pPrice[k];
                    pId[k] = pId[k+1];
                    pId[k +1] = tId;
                    pName[k] = pName[k+1];
                    pName[k+1] = tName;
                    pType[k] = pType[k+1];
                    pType[k+1] = tType;
                    pPrice[k] = pPrice[k+1];
                    pPrice[k+1] = tPrice;
                }
                k++;
            }
        }
    }

    
    
    public menuUI() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jTextId = new javax.swing.JTextField();
        jTextName = new javax.swing.JTextField();
        jTextType = new javax.swing.JTextField();
        jTextPrice = new javax.swing.JTextField();
        jTextRow = new javax.swing.JTextField();
        jPanel2 = new javax.swing.JPanel();
        jButtonAdd = new javax.swing.JButton();
        jButtonInsert = new javax.swing.JButton();
        jButtonDelete = new javax.swing.JButton();
        jButtonSearch = new javax.swing.JButton();
        jButtonSort = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();
        jScrollPane2 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(153, 153, 255));
        jPanel1.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));

        jLabel.setText("ID");

        jLabel2.setText("NAME");

        jLabel3.setText("TYPE");

        jLabel4.setText("PRICE");

        jLabel5.setText("POW");

        jTextType.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextTypeActionPerformed(evt);
            }
        });

        jTextPrice.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextPriceActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(48, 48, 48)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel2)
                            .addComponent(jLabel)
                            .addComponent(jLabel3))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jTextType)
                            .addComponent(jTextId)
                            .addComponent(jTextName)))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel4)
                            .addComponent(jLabel5))
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGap(24, 24, 24)
                                .addComponent(jTextRow, javax.swing.GroupLayout.DEFAULT_SIZE, 144, Short.MAX_VALUE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGap(21, 21, 21)
                                .addComponent(jTextPrice)))))
                .addContainerGap(22, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel)
                    .addComponent(jTextId, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(jTextName, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(jTextType, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(jTextPrice, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(jTextRow, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(18, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 10, -1, -1));

        jPanel2.setBackground(new java.awt.Color(255, 153, 153));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jButtonAdd.setText("ADD");
        jButtonAdd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonAddActionPerformed(evt);
            }
        });
        jPanel2.add(jButtonAdd, new org.netbeans.lib.awtextra.AbsoluteConstraints(6, 14, -1, -1));

        jButtonInsert.setText("INSERT");
        jButtonInsert.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonInsertActionPerformed(evt);
            }
        });
        jPanel2.add(jButtonInsert, new org.netbeans.lib.awtextra.AbsoluteConstraints(106, 14, -1, -1));

        jButtonDelete.setText("DELETE");
        jButtonDelete.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonDeleteActionPerformed(evt);
            }
        });
        jPanel2.add(jButtonDelete, new org.netbeans.lib.awtextra.AbsoluteConstraints(211, 14, -1, -1));

        jButtonSearch.setText("SEARCH");
        jButtonSearch.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonSearchActionPerformed(evt);
            }
        });
        jPanel2.add(jButtonSearch, new org.netbeans.lib.awtextra.AbsoluteConstraints(328, 14, -1, -1));

        jButtonSort.setText("SORT");
        jButtonSort.setMaximumSize(new java.awt.Dimension(85, 27));
        jButtonSort.setMinimumSize(new java.awt.Dimension(85, 27));
        jButtonSort.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonSortActionPerformed(evt);
            }
        });
        jPanel2.add(jButtonSort, new org.netbeans.lib.awtextra.AbsoluteConstraints(431, 14, 101, -1));

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(6, 240, 540, 50));

        jTextArea1.setBackground(new java.awt.Color(153, 204, 255));
        jTextArea1.setColumns(20);
        jTextArea1.setRows(5);
        jScrollPane1.setViewportView(jTextArea1);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 10, 248, 223));

        jTable1.setBackground(new java.awt.Color(242, 242, 242));
        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "ID", "NAME", "TYPE", "PRICE"
            }
        ));
        jTable1.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jTable1MouseClicked(evt);
            }
        });
        jScrollPane2.setViewportView(jTable1);

        getContentPane().add(jScrollPane2, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 300, 540, 284));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jTextPriceActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextPriceActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextPriceActionPerformed

    private void jTextTypeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextTypeActionPerformed

    }//GEN-LAST:event_jTextTypeActionPerformed

    private void jTable1MouseClicked(java.awt.event.MouseEvent evt) {                                     

        int col = jTable1.getColumnCount();
        
        jTextId.setText(jTable1.getValueAt(jTable1.getSelectedRow(), 0).toString());
        jTextName.setText(jTable1.getValueAt(jTable1.getSelectedRow(), 1).toString());
        jTextType.setText(jTable1.getValueAt(jTable1.getSelectedRow(), 2).toString());
        jTextPrice.setText(jTable1.getValueAt(jTable1.getSelectedRow(), 3).toString());
        jTextRow.setText(jTable1.getValueAt(jTable1.getSelectedRow(), col).toString());


    } 
    
    private void jButtonInsertActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonInsertActionPerformed

        int pos = Integer.parseInt(jTextRow.getText());
        Insert(pos, row);
        for (int i = 0; i < row; i++){
            jTable1.setValueAt(pId[i], i, 0);
            jTable1.setValueAt(pName[i], i, 1);
            jTable1.setValueAt(pType[i], i, 2);
            jTable1.setValueAt(pPrice[i], i, 3);
        }
    }//GEN-LAST:event_jButtonInsertActionPerformed


    private void jButtonDeleteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonDeleteActionPerformed
        
         int k = Integer.parseInt(jTextRow.getText());
        Delete(k);
        DefaultTableModel model = (DefaultTableModel) jTable1.getModel();
        model.removeRow(k);
      row++;

    }//GEN-LAST:event_jButtonDeleteActionPerformed

    private void jButtonSearchActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonSearchActionPerformed
        
        int id = Integer.parseInt(jTextId.getText());
        int data = Search(id);
         
        if (data > -1){
            jTextArea1.setText(
                "-----------------------" + 
                "\n ID = " + pId[data] + 
                "\n NAME = "+ pName[data] +
                "\n TYPE = " + pType[data] + 
                "\n RPICE = "+ pPrice[data] 
            );
        }
        else{
            jTextArea1.setText("Not Found!");
        }
    }//GEN-LAST:event_jButtonSearchActionPerformed

    private void jButtonSortActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonSortActionPerformed

        Sort();
        int k = 0;
        jTextArea1.setText("---------------------------------------\n");
        jTextArea1.setText(jTextArea1.getText() + "\n" + "ID    NAME    TYPE    PRICE\n");
        jTextArea1.setText(jTextArea1.getText() + "\n" + "----------------------------------\n");

        while (k <= row) {
          jTextArea1.setText(jTextArea1.getText() + "\n" + pId[k] + "    "
              + pName[k] + "    " + pType[k] + "    " + pPrice[k] + "\n");
          k++;
        }
        
        jTextArea1.setText(jTextArea1.getText() + "------------------------------------\n");
        
    }//GEN-LAST:event_jButtonSortActionPerformed

    private void jButtonAddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonAddActionPerformed

        pId[row] = Integer.parseInt(jTextId.getText());
        pName[row] = jTextName.getText();
        pType[row] = Integer.parseInt(jTextType.getText());
        pPrice[row] = Float.parseFloat(jTextPrice.getText());
        
        jTable1.setValueAt(pId[row], row, 0);
        jTable1.setValueAt(pName[row], row, 1);
        jTable1.setValueAt(pType[row], row, 2);
        jTable1.setValueAt(pPrice[row], row, 3);
        row++;
        
    }//GEN-LAST:event_jButtonAddActionPerformed

    // @param args the command line arguments
    
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(menuUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(menuUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(menuUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(menuUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new menuUI().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButtonAdd;
    private javax.swing.JButton jButtonDelete;
    private javax.swing.JButton jButtonInsert;
    private javax.swing.JButton jButtonSearch;
    private javax.swing.JButton jButtonSort;
    private javax.swing.JLabel jLabel;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTable jTable1;
    private javax.swing.JTextArea jTextArea1;
    private javax.swing.JTextField jTextId;
    private javax.swing.JTextField jTextName;
    private javax.swing.JTextField jTextPrice;
    private javax.swing.JTextField jTextRow;
    private javax.swing.JTextField jTextType;
    // End of variables declaration//GEN-END:variables
}
